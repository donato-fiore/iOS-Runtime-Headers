// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RTIDOCUMENTREQUEST_H
#define RTIDOCUMENTREQUEST_H

@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface RTIDocumentRequest : NSObject <NSSecureCoding, NSCopying>

 {
    BOOL _didSetRectGranularity;
}


@property (nonatomic) NSInteger flags; // ivar: _flags
@property (nonatomic) NSInteger rectGranularity; // ivar: _rectGranularity
@property (nonatomic) NSInteger surroundingGranularityCount; // ivar: _surroundingGranularityCount
@property (nonatomic) NSInteger textGranularity; // ivar: _textGranularity


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif