// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef OCDSUMMARY_H
#define OCDSUMMARY_H

@class NSString;

#import <Foundation/Foundation.h>


@interface OCDSummary : NSObject {
    NSString *mTitle;
    NSString *mAuthor;
    NSString *mKeywords;
    NSString *mComments;
    NSString *mHyperlinkBase;
}


@property (retain) NSString *company; // ivar: _company
@property (retain) NSString *subject; // ivar: _subject


-(id)author;
-(id)comments;
-(id)hyperlinkBase;
-(id)keywords;
-(id)title;
-(void)setAuthor:(id)arg0 ;
-(void)setComments:(id)arg0 ;
-(void)setHyperlinkBase:(id)arg0 ;
-(void)setKeywords:(id)arg0 ;
-(void)setTitle:(id)arg0 ;


@end


#endif