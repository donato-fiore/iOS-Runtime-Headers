// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKUILOCALIZEDSTRINGDICTIONARY_H
#define SKUILOCALIZEDSTRINGDICTIONARY_H

@class NSArray, NSMutableArray, NSString;

#import <Foundation/Foundation.h>


@interface SKUILocalizedStringDictionary : NSObject {
    NSArray *_bundles;
    NSMutableArray *_stringTables;
}


@property (readonly, nonatomic) NSString *localeName; // ivar: _localeName


-(id)_stringTableForBundle:(id)arg0 tableName:(id)arg1 ;
-(id)initWithLocaleName:(id)arg0 bundles:(id)arg1 ;
-(id)localizedStringForKey:(id)arg0 ;
-(id)localizedStringForKey:(id)arg0 inTable:(id)arg1 ;


@end


#endif