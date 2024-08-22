// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WDACONTENT_H
#define WDACONTENT_H

@class NSString;
@protocol OADClient, OADTextClient, OADLinkedTextClient;

#import <Foundation/Foundation.h>

#import "WDATextBox.h"
#import "WDAAnchor.h"
#import "OADDrawable.h"

@interface WDAContent : NSObject <OADClient, OADTextClient, OADLinkedTextClient>

 {
    WDATextBox *mTextBox;
    int mTextType;
}


@property (readonly, nonatomic) WDAAnchor *anchor; // ivar: mAnchor
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak) OADDrawable *drawable; // ivar: mDrawable
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(Class)classForType:(unsigned short)arg0 ;
-(BOOL)floating;
-(BOOL)hasBounds;
-(BOOL)hasText;
-(BOOL)isLine;
-(BOOL)isLinked;
-(BOOL)isShape;
-(BOOL)isTopLevelObject;
-(NSUInteger)linkedTextBoxSupport;
-(id)createAnchor;
-(id)createTextBoxWithDocument:(id)arg0 textType:(int)arg1 ;
-(id)init;
-(id)textBox;
-(int)textType;
-(struct CGRect )bounds;
-(void)clearAnchor;
-(void)setBounds:(struct CGRect )arg0 ;
-(void)setTextBox:(id)arg0 document:(id)arg1 ;
-(void)setTextType:(int)arg0 ;


@end


#endif