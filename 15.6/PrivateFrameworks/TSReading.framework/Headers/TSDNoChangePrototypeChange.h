// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSDNOCHANGEPROTOTYPECHANGE_H
#define TSDNOCHANGEPROTOTYPECHANGE_H

@class NSString;
@protocol TSDPrototypeChange, TSSPropertySource;

#import <Foundation/Foundation.h>


@interface TSDNoChangePrototypeChange : NSObject <TSDPrototypeChange>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, retain) NSObject<TSSPropertySource> *propertiesAfterChange;
@property (readonly, retain) NSObject<TSSPropertySource> *propertiesBeforeChange;
@property (readonly, retain) id *prototype; // ivar: mPrototype
@property (readonly) BOOL prototypeIsBeingDeleted;
@property (readonly) BOOL prototypeIsBeingModified;
@property (readonly) BOOL prototypeIsBeingReplaced;
@property (readonly, retain) id *replacement;
@property (readonly) Class superclass;


-(BOOL)propertiesAreChanging:(id)arg0 ;
-(BOOL)propertyIsChanging:(int)arg0 ;
-(id)changedPropertySet;
-(id)initNoChangePrototypeChangeForPrototype:(id)arg0 ;
-(void)dealloc;


@end


#endif