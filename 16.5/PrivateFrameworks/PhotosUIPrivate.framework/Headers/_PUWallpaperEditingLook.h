// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _PUWALLPAPEREDITINGLOOK_H
#define _PUWALLPAPEREDITINGLOOK_H

@class NSString;
@protocol PUWallpaperEditingLook;

#import <Foundation/Foundation.h>


@interface _PUWallpaperEditingLook : NSObject <PUWallpaperEditingLook>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *displayName; // ivar: _displayName
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSUInteger pu_timeAppearance; // ivar: _pu_timeAppearance
@property (readonly, nonatomic) NSObject *pu_timeFontColor; // ivar: _pu_timeFontColor
@property (readonly, nonatomic) NSString *pu_timeFontIdentifier; // ivar: _pu_timeFontIdentifier
@property (readonly) Class superclass;


-(id)initWithDisplayName:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 displayName:(id)arg1 ;
-(id)initWithIdentifier:(id)arg0 displayName:(id)arg1 pu_timeAppearance:(NSUInteger)arg2 pu_timeFontIdentifier:(id)arg3 pu_timeFontColor:(id)arg4 ;


@end


#endif