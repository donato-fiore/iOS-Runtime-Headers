// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef STOCKDATASOURCE_H
#define STOCKDATASOURCE_H

@class NSString;

#import <Foundation/Foundation.h>


@interface StockDataSource : NSObject

@property (nonatomic) NSInteger identifier; // ivar: _identifier
@property (readonly, nonatomic) NSString *localizedSourceDescription;
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (copy, nonatomic) NSString *sourceDescription; // ivar: _sourceDescription


-(id)archiveDictionary;
-(id)description;
-(id)initWithDictionary:(id)arg0 ;


@end


#endif