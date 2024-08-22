// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FPLOCALIZABLESTRINGLOOKUP_H
#define FPLOCALIZABLESTRINGLOOKUP_H

@class NSBundle, NSString, NSArray;

#import <Foundation/Foundation.h>


@interface FPLocalizableStringLookup : NSObject

@property (retain, nonatomic) NSBundle *bundle; // ivar: _bundle
@property (retain, nonatomic) id *cfBundle; // ivar: _cfBundle
@property (copy, nonatomic) NSString *tableName;
@property (copy, nonatomic) NSArray *tableNames; // ivar: _tableNames


-(id)localizedStringForKey:(id)arg0 ;


@end


#endif