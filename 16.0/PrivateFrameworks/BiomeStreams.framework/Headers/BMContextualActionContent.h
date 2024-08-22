// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BMCONTEXTUALACTIONCONTENT_H
#define BMCONTEXTUALACTIONCONTENT_H

@class NSDictionary, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface BMContextualActionContent : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSDictionary *contentMetadata; // ivar: _contentMetadata
@property (readonly, nonatomic) NSString *contentType; // ivar: _contentType


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithType:(id)arg0 metadata:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif