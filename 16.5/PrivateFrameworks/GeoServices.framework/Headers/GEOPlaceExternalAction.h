// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOPLACEEXTERNALACTION_H
#define GEOPLACEEXTERNALACTION_H

@class NSString, NSArray, NSOrderedSet;

#import <Foundation/Foundation.h>

#import "GEOPDActionData.h"

@interface GEOPlaceExternalAction : NSObject {
    GEOPDActionData *_actionData;
}


@property (readonly, nonatomic) NSString *actionName;
@property (readonly, nonatomic) NSArray *actionProviders; // ivar: _actionProviders
@property (readonly, nonatomic) NSOrderedSet *appAdamIds;
@property (readonly, nonatomic) NSString *categoryId;
@property (readonly, nonatomic) NSString *symbolName;
@property (readonly, nonatomic) NSString *winningAdamId;


-(id)description;
-(id)initWithActionData:(id)arg0 attributionMap:(id)arg1 ;
-(id)partnerActionForAdamId:(id)arg0 ;
-(void)_setupActionProvidersWithAttributionMap:(id)arg0 ;


@end


#endif