// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IKNAVIGATIONITEM_H
#define IKNAVIGATIONITEM_H

@class NSDictionary;

#import <Foundation/Foundation.h>

#import "IKAppDocument.h"

@interface IKNavigationItem : NSObject

@property (retain, nonatomic) IKAppDocument *document; // ivar: _document
@property (retain, nonatomic) NSDictionary *options; // ivar: _options


-(id)initWithDocument:(id)arg0 presentationOptions:(id)arg1 ;


@end


#endif