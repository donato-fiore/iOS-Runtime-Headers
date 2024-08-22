// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC13COREIDVSHARED11PRDMETADATA_H
#define _TTC13COREIDVSHARED11PRDMETADATA_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface _TtC13CoreIDVShared11PRDMetadata : NSObject <NSSecureCoding>

 {
    ? stage1;
    ? stage2;
    ? timestamp;
}


@property (nonatomic, readonly) NSString *debugDescription;


+(BOOL)supportsSecureCoding;
+(void)setSupportsSecureCoding:(BOOL)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif