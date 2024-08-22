// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC7SWIFTUIP33_7B8BEE61C4A02DCD29DD7A9875C2F42321UIKITSEARCHSUGGESTION_H
#define _TTC7SWIFTUIP33_7B8BEE61C4A02DCD29DD7A9875C2F42321UIKITSEARCHSUGGESTION_H

@class UIImage, NSAttributedString, NSString;
@protocol _UISearchSuggestion_dci;

#import <Foundation/Foundation.h>


@interface _TtC7SwiftUIP33_7B8BEE61C4A02DCD29DD7A9875C2F42321UIKitSearchSuggestion : NSObject <_UISearchSuggestion_dci>

 {
    ? platformItem;
}


@property (nonatomic, readonly) UIImage *iconImage;
@property (nonatomic, readonly) NSAttributedString *localizedAttributedSuggestion;
@property (nonatomic, readonly) NSString *localizedDescription;
@property (nonatomic, readonly) NSString *localizedSuggestion;
@property (nonatomic, copy) id *representedObject;


-(id)init;


@end


#endif