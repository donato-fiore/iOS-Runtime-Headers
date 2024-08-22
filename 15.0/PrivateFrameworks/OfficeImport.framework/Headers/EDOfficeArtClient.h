// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EDOFFICEARTCLIENT_H
#define EDOFFICEARTCLIENT_H

@class NSMutableDictionary, NSString;
@protocol OADClient, OADTextClient;

#import <Foundation/Foundation.h>

#import "EDSheet.h"
#import "EDAnchor.h"
#import "EDTextBox.h"
#import "EDComment.h"

@interface EDOfficeArtClient : NSObject <OADClient, OADTextClient>

 {
    EDSheet *mSheet;
    id *mClientState;
    EDAnchor *mAnchor;
    EDTextBox *mTextBox;
    EDComment *mComment;
    NSMutableDictionary *mTableModels;
    CGRect mBounds;
    BOOL mIsBoundsSet;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)areBoundsSet;
-(BOOL)hasBounds;
-(BOOL)hasText;
-(id)anchor;
-(id)clientState;
-(id)comment;
-(id)sheet;
-(id)tableModels;
-(id)textBox;
-(struct CGRect )bounds;
-(void)setAnchor:(id)arg0 ;
-(void)setBounds:(struct CGRect )arg0 ;
-(void)setClientState:(id)arg0 ;
-(void)setComment:(id)arg0 ;
-(void)setSheet:(id)arg0 ;
-(void)setTableModels:(id)arg0 ;
-(void)setTextBox:(id)arg0 ;


@end


#endif