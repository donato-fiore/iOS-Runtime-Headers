// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef COREDAVITEM_H
#define COREDAVITEM_H

@class NSMutableSet, NSString, NSMutableArray, NSData;
@protocol CoreDAVItem;

#import <Foundation/Foundation.h>


@interface CoreDAVItem : NSObject <CoreDAVItem>



@property (retain, nonatomic) NSMutableSet *attributes; // ivar: _attributes
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSMutableArray *extraChildItems; // ivar: _extraChildItems
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSString *name; // ivar: _name
@property (retain, nonatomic) NSString *nameSpace; // ivar: _nameSpace
@property (retain, nonatomic) NSData *payload; // ivar: _payload
@property (readonly) Class superclass;
@property (nonatomic) BOOL useCDATA; // ivar: _useCDATA


+(id)copyParseRules;
+(id)parseRuleCache;
-(BOOL)validate;
-(id)childrenToWrite;
-(id)copyParseRules;
-(id)generateXMLString;
-(id)init;
-(id)initWithNameSpace:(id)arg0 andName:(id)arg1 ;
-(void)parserFoundAttributes:(id)arg0 ;
-(void)parserFoundPayload:(id)arg0 ;
-(void)parserFoundUnrecognizedElement:(id)arg0 ;
-(void)parserSuggestsBaseURL:(id)arg0 ;
-(void)write:(id)arg0 ;


@end


#endif