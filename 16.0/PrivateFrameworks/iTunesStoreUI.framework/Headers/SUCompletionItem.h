// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SUCOMPLETIONITEM_H
#define SUCOMPLETIONITEM_H

@class NSURL, NSString;

#import <Foundation/Foundation.h>


@interface SUCompletionItem : NSObject

@property (readonly, nonatomic) NSURL *URL; // ivar: _url
@property (readonly, nonatomic) NSString *alternateTitle; // ivar: _alternateTitle
@property (readonly, nonatomic) NSString *title; // ivar: _title


-(id)init;
-(id)initWithPropertyList:(id)arg0 ;
-(void)dealloc;


@end


#endif