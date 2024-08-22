// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC8SETTINGS14SIDEBARSECTION_H
#define _TTC8SETTINGS14SIDEBARSECTION_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface _TtC8Settings14SidebarSection : NSObject <NSSecureCoding>

 {
    ? label;
    ? content;
}


@property (nonatomic, readonly) NSString *description;


+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif