// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _SIRICORESQLITETABLEINFO_H
#define _SIRICORESQLITETABLEINFO_H

@class NSArray, NSString;
@protocol SiriCoreSQLiteTable;

#import <Foundation/Foundation.h>


@interface _SiriCoreSQLiteTableInfo : NSObject <SiriCoreSQLiteTable>



@property (readonly, copy, nonatomic) NSArray *columns; // ivar: _columns
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *name; // ivar: _name
@property (readonly) Class superclass;


-(id)initWithName:(id)arg0 columns:(id)arg1 ;


@end


#endif