// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DTTAPMESSAGE_H
#define DTTAPMESSAGE_H

@class NSMutableDictionary;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface DTTapMessage : NSObject <NSSecureCoding>

 {
    NSMutableDictionary *_plist;
}


@property (nonatomic) int kind;


+(BOOL)supportsSecureCoding;
+(void)initialize;
-(id)init;
-(id)initAsKind:(int)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)plist;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif