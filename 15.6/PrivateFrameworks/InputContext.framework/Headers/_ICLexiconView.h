// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _ICLEXICONVIEW_H
#define _ICLEXICONVIEW_H

@class NSString;

#import <Foundation/Foundation.h>


@interface _ICLexiconView : NSObject {
    *_LXLexicon _lexicon;
}


@property (readonly, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) unsigned char typeFlags; // ivar: _typeFlags


-(BOOL)contains:(id)arg0 ;
-(id)getSortKeyEquivalents:(id)arg0 ;
-(id)initWithName:(id)arg0 typeFlags:(unsigned char)arg1 ;
-(struct _LXEntry *)copyEntryForString:(id)arg0 ;
-(struct _LXLexicon *)getLexiconImplementation;
-(void)dealloc;


@end


#endif