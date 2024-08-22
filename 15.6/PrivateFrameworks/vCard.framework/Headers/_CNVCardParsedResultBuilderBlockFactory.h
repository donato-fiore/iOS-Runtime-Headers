// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _CNVCARDPARSEDRESULTBUILDERBLOCKFACTORY_H
#define _CNVCARDPARSEDRESULTBUILDERBLOCKFACTORY_H

@class NSString;
@protocol CNVCardParsedResultBuilderFactory;

#import <Foundation/Foundation.h>


@interface _CNVCardParsedResultBuilderBlockFactory : NSObject <CNVCardParsedResultBuilderFactory>

 {
    id *_block;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithBlock:(id)arg0 ;
-(id)makeBuilder;


@end


#endif