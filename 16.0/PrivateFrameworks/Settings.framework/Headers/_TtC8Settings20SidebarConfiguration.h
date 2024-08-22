// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC8SETTINGS20SIDEBARCONFIGURATION_H
#define _TTC8SETTINGS20SIDEBARCONFIGURATION_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface _TtC8Settings20SidebarConfiguration : NSObject <NSSecureCoding>

 {
    ? wantsAddButton;
    ? wantsDeleteButton;
    ? addButtonEnabled;
    ? deleteButtonEnabled;
    ? selection;
    ? iconSize;
}




+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif