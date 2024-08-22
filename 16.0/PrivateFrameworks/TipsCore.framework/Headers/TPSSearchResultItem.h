// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TPSSEARCHRESULTITEM_H
#define TPSSEARCHRESULTITEM_H


#import <Foundation/Foundation.h>


@interface TPSSearchResultItem : NSObject {
    ? documentIdentifier;
    ? collectionIdentifier;
    ? correlationIdentifier;
    ? title;
    ? body;
    ? relevance;
}




-(id)init;


@end


#endif