// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SFMASKGENERATIONFUNCTION1_H
#define SFMASKGENERATIONFUNCTION1_H

@class NSString;
@protocol SFMaskGenerationFunction, SFDigestOperation;

#import <Foundation/Foundation.h>


@interface SFMaskGenerationFunction1 : NSObject <SFMaskGenerationFunction>

 {
    id *_mgf1OperationInternal;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSObject<SFDigestOperation> *digestOperation;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)generateMaskWithLength:(NSInteger)arg0 data:(id)arg1 error:(id)arg2 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDigestOperation:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif