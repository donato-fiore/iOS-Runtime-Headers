// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef APPCCONTENTDEPICTION_H
#define APPCCONTENTDEPICTION_H

@class NSArray, NSString;
@protocol APPCPromotableContentDepiction;

#import <Foundation/Foundation.h>


@interface APPCContentDepiction : NSObject <APPCPromotableContentDepiction>

 {
    ? identifier;
    ? language;
    ? locale;
    ? searchTerms;
    ? keywords;
    ? categories;
}


@property (nonatomic, readonly) NSUInteger adjacentPosition; // ivar: adjacentPosition
@property (nonatomic, readonly) NSArray *categories;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSArray *keywords;
@property (nonatomic, readonly) NSString *language;
@property (nonatomic, readonly) NSString *locale;
@property (nonatomic, readonly) NSInteger placement; // ivar: placement
@property (nonatomic, readonly) NSArray *searchTerms;


-(id)init;
-(id)initWithIdentifier:(id)arg0 adjacentPosition:(NSUInteger)arg1 placement:(NSInteger)arg2 language:(id)arg3 locale:(id)arg4 searchTerms:(id)arg5 keywords:(id)arg6 categories:(id)arg7 ;
-(id)initWithIdentifier:(id)arg0 placement:(NSInteger)arg1 language:(id)arg2 locale:(id)arg3 searchTerms:(id)arg4 keywords:(id)arg5 categories:(id)arg6 ;


@end


#endif