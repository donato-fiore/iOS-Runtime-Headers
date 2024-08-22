// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PRUIMODALENTRYPOINTRESPONSE_H
#define PRUIMODALENTRYPOINTRESPONSE_H

@class NSString;
@protocol NSObject, BSXPCSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface PRUIModalEntryPointResponse : NSObject <NSObject, BSXPCSecureCoding, NSCopying>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger result; // ivar: _result
@property (readonly) Class superclass;


+(BOOL)supportsBSXPCSecureCoding;
+(id)cancel;
+(id)done;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithBSXPCCoder:(id)arg0 ;
-(id)initWithResult:(NSInteger)arg0 ;
-(void)encodeWithBSXPCCoder:(id)arg0 ;


@end


#endif