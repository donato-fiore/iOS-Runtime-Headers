// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NUARTICLEEXCERPTHTMLSTRIPPER_H
#define NUARTICLEEXCERPTHTMLSTRIPPER_H

@class NSString, NSMutableArray;
@protocol NSXMLParserDelegate;

#import <Foundation/Foundation.h>


@interface NUArticleExcerptHTMLStripper : NSObject <NSXMLParserDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSMutableArray *parts; // ivar: _parts
@property (readonly, nonatomic) NSString *strippedString; // ivar: _strippedString
@property (readonly) Class superclass;


-(id)initWithHTMLString:(id)arg0 ;
-(id)stripHTMLString:(id)arg0 ;
-(void)parser:(id)arg0 foundCharacters:(id)arg1 ;


@end


#endif