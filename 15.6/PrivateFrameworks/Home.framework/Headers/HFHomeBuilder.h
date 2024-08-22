// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HFHOMEBUILDER_H
#define HFHOMEBUILDER_H

@class NSString;
@protocol HFNamedItemBuilder;


#import "HFItemBuilder.h"
#import "HFWallpaperEditCollectionBuilder.h"

@interface HFHomeBuilder : HFItemBuilder <HFNamedItemBuilder>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *userNotes; // ivar: _userNotes
@property (retain, nonatomic) HFWallpaperEditCollectionBuilder *wallpaperBuilder; // ivar: _wallpaperBuilder


+(Class)homeKitRepresentationClass;
-(id)commitItem;
-(id)createHome;
-(id)initWithExistingObject:(id)arg0 inHome:(id)arg1 ;
-(id)performValidation;
-(id)updateName;
-(id)updateUserNotes;
-(void)setHome:(id)arg0 ;


@end


#endif