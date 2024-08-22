// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICNOTEBASEUSERACTIVITYSTATE_H
#define ICNOTEBASEUSERACTIVITYSTATE_H

@class CSSearchableItemAttributeSet, NSDictionary, NSString;

#import <Foundation/Foundation.h>


@interface ICNoteBaseUserActivityState : NSObject

@property (retain, nonatomic) CSSearchableItemAttributeSet *attributeSet; // ivar: _attributeSet
@property (readonly, copy, nonatomic) NSDictionary *contentAttributes; // ivar: _contentAttributes
@property (retain, nonatomic) NSString *persistentIdentifier; // ivar: _persistentIdentifier


-(id)initWithNote:(id)arg0 ;
-(void)updateUserActivity:(id)arg0 ;


@end


#endif