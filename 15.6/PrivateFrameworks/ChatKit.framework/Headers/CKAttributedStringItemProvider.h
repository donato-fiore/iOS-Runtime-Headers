// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKATTRIBUTEDSTRINGITEMPROVIDER_H
#define CKATTRIBUTEDSTRINGITEMPROVIDER_H

@class NSAttributedString, NSString, NSArray;
@protocol NSItemProviderWriting;

#import <Foundation/Foundation.h>


@interface CKAttributedStringItemProvider : NSObject <NSItemProviderWriting>



@property (readonly, nonatomic) NSAttributedString *attributedString; // ivar: _attributedString
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSArray *writableTypeIdentifiersForItemProvider;


-(id)initWithAttributedString:(id)arg0 ;
-(id)loadDataWithTypeIdentifier:(id)arg0 forItemProviderCompletionHandler:(id)arg1 ;


@end


#endif