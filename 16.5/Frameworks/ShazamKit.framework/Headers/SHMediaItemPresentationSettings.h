// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SHMEDIAITEMPRESENTATIONSETTINGS_H
#define SHMEDIAITEMPRESENTATIONSETTINGS_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SHMediaItemPresentationSettings : NSObject <NSSecureCoding>



@property (readonly, nonatomic) BOOL openResultInBrowserOnFailure; // ivar: _openResultInBrowserOnFailure


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSettings:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif