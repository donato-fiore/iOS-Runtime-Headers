// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NULINKEDCONTENTMANAGERFACTORY_H
#define NULINKEDCONTENTMANAGERFACTORY_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface NULinkedContentManagerFactory : NSObject

@property (readonly, nonatomic) NSMutableArray *factories; // ivar: _factories


-(id)createLinkedContentManagerForArticle:(id)arg0 ;
-(id)init;
-(void)addLinkedContentProviderFactory:(id)arg0 ;


@end


#endif