// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CMSTATE_H
#define CMSTATE_H

@class NSMutableDictionary, NSString;

#import <Foundation/Foundation.h>

#import "OADColorMap.h"
#import "OADColorScheme.h"
#import "OCDDocument.h"

@interface CMState : NSObject {
    NSMutableDictionary *components;
    NSMutableDictionary *htmlResource;
    NSString *mResourceUrlPrefix;
    NSInteger _textLevel;
}


@property (retain) OADColorMap *colorMap; // ivar: mColorMap
@property (retain) OADColorScheme *colorScheme; // ivar: mColorScheme
@property (retain) OCDDocument *document; // ivar: _document
@property BOOL isOnPhone; // ivar: mIsOnPhone
@property BOOL isThumbnail; // ivar: mIsThumbnail
@property (retain) id *resources; // ivar: mResources
@property NSUInteger sourceFormat; // ivar: mSourceFormat


-(BOOL)isOffice12;
-(NSInteger)textLevel;
-(id)componentByName:(id)arg0 ;
-(id)getHtmlResource;
-(id)init;
-(id)resourceUrlPrefix;
-(void)copyFromCMStateWithoutComponents:(id)arg0 ;
-(void)popTextLevel;
-(void)pushTextLevel;
-(void)setComponentWithName:(id)arg0 value:(id)arg1 ;
-(void)setHtmlResource:(id)arg0 ;
-(void)setResourceUrlPrefix:(id)arg0 ;


@end


#endif