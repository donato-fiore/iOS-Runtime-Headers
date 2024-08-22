// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _NSATTRIBUTEDSTRINGFROMMARKDOWNCREATORCONCRETE_H
#define _NSATTRIBUTEDSTRINGFROMMARKDOWNCREATORCONCRETE_H

@protocol _NSAttributedStringFromMarkdownCreator;

#import <Foundation/Foundation.h>

#import "NSMutableAttributedString.h"
#import "NSString.h"

@interface _NSAttributedStringFromMarkdownCreatorConcrete : NSObject <_NSAttributedStringFromMarkdownCreator>

 {
    NSMutableAttributedString *_result;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(id)parseExtendedAttributesFromData:(id)arg0 error:(*id)arg1 ;
-(id)result;
-(unsigned short)lastCharacter;
-(void)appendString:(id)arg0 ;
-(void)appendString:(id)arg0 with:(id)arg1 ;
-(void)dealloc;
-(void)finalizeWithLanguageIdentifier:(id)arg0 ;


@end


#endif