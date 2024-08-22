// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKTEXTRANGEHYPERLINK_H
#define PKTEXTRANGEHYPERLINK_H

@class NSString;

#import <Foundation/Foundation.h>


@interface PKTextRangeHyperlink : NSObject

@property (readonly, copy, nonatomic) id *action; // ivar: _action
@property (readonly, copy, nonatomic) NSString *linkText; // ivar: _linkText


+(id)hyperlinkSourcesFromApplyFooter:(id)arg0 linkTapped:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithLinkText:(id)arg0 action:(id)arg1 ;


@end


#endif