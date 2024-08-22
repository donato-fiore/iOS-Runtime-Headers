// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef XRXMLELEMENTPARSER_H
#define XRXMLELEMENTPARSER_H

@class NSDictionary, NSString;

#import <Foundation/Foundation.h>

#import "XRXMLElementParser.h"

@interface XRXMLElementParser : NSObject {
    id *context;
    XRXMLElementParser *parent;
    NSInteger _lineOfStart;
    NSInteger _colOfStart;
    NSInteger _lineOfEnd;
    NSInteger _colOfEnd;
    NSDictionary *_elementToClass;
    NSDictionary *_elementToKVC;
}


@property (readonly, nonatomic) NSDictionary *elementAttributes; // ivar: _elementAttributes
@property (readonly, nonatomic) NSString *elementName; // ivar: _elementName


-(id)endElementAtLine:(NSInteger)arg0 col:(NSInteger)arg1 ;
-(id)initWithElementName:(id)arg0 context:(id)arg1 ;
-(id)lineAndColumnForElementEnd;
-(id)lineAndColumnForElementStart;
-(id)startElementWithName:(id)arg0 attributes:(id)arg1 line:(NSInteger)arg2 col:(NSInteger)arg3 ;
-(id)valueForElementName:(id)arg0 ;
-(void)_handleCharacters:(id)arg0 ;
-(void)_handleCompletion;
-(void)_handleStart;
-(void)processCharacters:(id)arg0 ;
-(void)setValue:(id)arg0 forElementName:(id)arg1 ;
-(void)simulateEmptyElement:(id)arg0 ;


@end


#endif