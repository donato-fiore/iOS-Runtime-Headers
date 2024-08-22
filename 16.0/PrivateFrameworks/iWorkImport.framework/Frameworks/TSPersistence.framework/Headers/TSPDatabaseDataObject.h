// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSPDATABASEDATAOBJECT_H
#define TSPDATABASEDATAOBJECT_H



#import "TSPObject.h"
#import "TSPData.h"

@interface TSPDatabaseDataObject : TSPObject

@property (readonly, nonatomic) TSPData *data; // ivar: _data


-(void)loadFromUnarchiver:(id)arg0 ;


@end


#endif