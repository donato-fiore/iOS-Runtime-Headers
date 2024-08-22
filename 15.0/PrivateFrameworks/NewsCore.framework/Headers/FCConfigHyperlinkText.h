// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FCCONFIGHYPERLINKTEXT_H
#define FCCONFIGHYPERLINKTEXT_H

@class NSArray, NSString;

#import <Foundation/Foundation.h>


@interface FCConfigHyperlinkText : NSObject

@property (readonly, nonatomic) NSArray *links; // ivar: _links
@property (readonly, nonatomic) NSString *text; // ivar: _text


-(id)initWithConfigDictionary:(id)arg0 ;
-(id)initWithText:(id)arg0 links:(id)arg1 ;


@end


#endif