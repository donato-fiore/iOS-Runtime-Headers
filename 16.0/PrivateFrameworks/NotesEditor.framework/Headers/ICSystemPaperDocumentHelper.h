// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICSYSTEMPAPERDOCUMENTHELPER_H
#define ICSYSTEMPAPERDOCUMENTHELPER_H

@class ICAttachment, UITextView;

#import <Foundation/Foundation.h>


@interface ICSystemPaperDocumentHelper : NSObject {
    ? document;
}


@property (nonatomic, readonly) ICAttachment *attachment; // ivar: attachment
@property (nonatomic, weak) UITextView *textView; // ivar: textView


-(id)init;
-(id)initWithPaperAttachment:(id)arg0 textView:(id)arg1 ;
-(void)addWithItemProviders:(id)arg0 itemsAnchor:(NSInteger)arg1 ;
-(void)addWithItemProviders:(id)arg0 itemsLocation:(struct CGPoint )arg1 ;


@end


#endif