// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _SIRICORESQLITECOLUMNINFO_H
#define _SIRICORESQLITECOLUMNINFO_H

@class NSString;
@protocol SiriCoreSQLiteColumn, SiriCoreSQLiteValue;

#import <Foundation/Foundation.h>


@interface _SiriCoreSQLiteColumnInfo : NSObject <SiriCoreSQLiteColumn>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSObject<SiriCoreSQLiteValue> *defaultValue; // ivar: _defaultValue
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger identifier; // ivar: _identifier
@property (readonly, nonatomic) BOOL isNotNull; // ivar: _isNotNull
@property (readonly, nonatomic) BOOL isPrimaryKey; // ivar: _isPrimaryKey
@property (readonly, copy, nonatomic) NSString *name; // ivar: _name
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSString *type; // ivar: _type


-(id)initWithIdentifier:(NSInteger)arg0 name:(id)arg1 type:(id)arg2 isPrimaryKey:(BOOL)arg3 isNotNull:(BOOL)arg4 defaultValue:(id)arg5 ;


@end


#endif