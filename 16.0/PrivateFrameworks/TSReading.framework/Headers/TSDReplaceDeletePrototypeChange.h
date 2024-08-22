// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSDREPLACEDELETEPROTOTYPECHANGE_H
#define TSDREPLACEDELETEPROTOTYPECHANGE_H

@class NSString;
@protocol TSDPrototypeChange, TSSPropertySource;

#import <Foundation/Foundation.h>


@interface TSDReplaceDeletePrototypeChange : NSObject <TSDPrototypeChange>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, retain) NSObject<TSSPropertySource> *propertiesAfterChange;
@property (readonly, retain) NSObject<TSSPropertySource> *propertiesBeforeChange;
@property (readonly, retain) id *prototype; // ivar: mPrototype
@property (readonly) BOOL prototypeIsBeingDeleted; // ivar: mPrototypeIsBeingDeleted
@property (readonly) BOOL prototypeIsBeingModified;
@property (readonly) BOOL prototypeIsBeingReplaced; // ivar: mPrototypeIsBeingReplaced
@property (readonly, retain) id *replacement; // ivar: mReplacement
@property (readonly) Class superclass;


-(BOOL)propertiesAreChanging:(id)arg0 ;
-(BOOL)propertyIsChanging:(int)arg0 ;
-(id)changedPropertySet;
-(id)initDeletePrototypeChangeForPrototype:(id)arg0 replacement:(id)arg1 ;
-(id)initReplacePrototypeChangeForPrototype:(id)arg0 toReplacement:(id)arg1 ;
-(void)dealloc;


@end


#endif