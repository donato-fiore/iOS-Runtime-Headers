// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSWPSTORAGESTYLEPROVIDER_H
#define TSWPSTORAGESTYLEPROVIDER_H

@class NSString;
@protocol TSWPStyleProvider;

#import <Foundation/Foundation.h>


@interface TSWPStorageStyleProvider : NSObject <TSWPStyleProvider>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL supportsBoldItalicUnderlineShortcuts;


+(id)styleProviderForStorage:(id)arg0 ;
-(id)characterStyleAtCharIndex:(NSUInteger)arg0 effectiveRange:(struct _NSRange *)arg1 ;
-(id)dropCapStyleAtParIndex:(NSUInteger)arg0 ;
-(id)listStyleAtParIndex:(NSUInteger)arg0 effectiveRange:(struct _NSRange *)arg1 ;
-(id)paragraphStyleAtParIndex:(NSUInteger)arg0 effectiveRange:(struct _NSRange *)arg1 ;
-(id)textPropertiesForEquation:(id)arg0 basedOnProperties:(id)arg1 ;


@end


#endif