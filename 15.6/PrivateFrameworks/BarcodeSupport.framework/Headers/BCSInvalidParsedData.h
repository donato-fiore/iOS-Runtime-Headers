// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BCSINVALIDPARSEDDATA_H
#define BCSINVALIDPARSEDDATA_H

@class NSString;
@protocol BCSParsedDataPrivate;

#import <Foundation/Foundation.h>


@interface BCSInvalidParsedData : NSObject <BCSParsedDataPrivate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *extraPreviewText;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *invalidContents; // ivar: _invalidContents
@property (readonly, nonatomic) NSInteger invalidDataType; // ivar: _invalidDataType
@property (copy, nonatomic) NSString *invalidURLScheme; // ivar: _invalidURLScheme
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSInteger type;


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithInvalidDataType:(NSInteger)arg0 invalidContents:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif