// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _SIRICORESQLITEINDEXINFO_H
#define _SIRICORESQLITEINDEXINFO_H

@class NSArray, NSString;
@protocol SiriCoreSQLiteIndex;

#import <Foundation/Foundation.h>


@interface _SiriCoreSQLiteIndexInfo : NSObject <SiriCoreSQLiteIndex>



@property (readonly, copy, nonatomic) NSArray *columns; // ivar: _columns
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *name; // ivar: _name
@property (readonly) Class superclass;


-(id)initWithName:(id)arg0 columns:(id)arg1 ;


@end


#endif