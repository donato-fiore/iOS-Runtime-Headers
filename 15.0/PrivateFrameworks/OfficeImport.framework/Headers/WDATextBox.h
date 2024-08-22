// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WDATEXTBOX_H
#define WDATEXTBOX_H

@class NSNumber;

#import <Foundation/Foundation.h>

#import "WDText.h"
#import "WDDocument.h"
#import "WDAContent.h"

@interface WDATextBox : NSObject {
    WDText *mText;
    NSUInteger mNextTextBoxId;
    BOOL mOle;
}


@property (weak) WDDocument *document; // ivar: mDocument
@property (retain) NSNumber *flowId; // ivar: _flowId
@property (retain) NSNumber *flowSequence; // ivar: _flowSequence
@property BOOL isMultiColumn; // ivar: _isMultiColumn
@property (weak) WDAContent *parent; // ivar: mParent


-(BOOL)isOle;
-(NSUInteger)nextTextBoxId;
-(id)description;
-(id)init;
-(id)text;
-(void)setNextTextBoxId:(NSUInteger)arg0 ;
-(void)setOle:(BOOL)arg0 ;
-(void)setText:(id)arg0 ;


@end


#endif