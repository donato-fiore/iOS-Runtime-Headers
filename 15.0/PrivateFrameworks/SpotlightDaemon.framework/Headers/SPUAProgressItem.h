// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SPUAPROGRESSITEM_H
#define SPUAPROGRESSITEM_H

@class NSString;

#import <Foundation/Foundation.h>


@interface SPUAProgressItem : NSObject

@property (retain, nonatomic) NSString *bundleID; // ivar: _bundleID
@property (nonatomic) unsigned int completeCount; // ivar: _completeCount
@property (nonatomic) unsigned int deleteCount; // ivar: _deleteCount
@property (nonatomic) unsigned int errorCount; // ivar: _errorCount
@property (nonatomic) unsigned int expectedCount; // ivar: _expectedCount
@property (retain, nonatomic) NSString *relatedID; // ivar: _relatedID
@property (retain, nonatomic) NSString *uaID; // ivar: _uaID


+(void)initialize;
+(void)queueRelatedDelete:(id)arg0 forBundleID:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithBundleID:(id)arg0 uaID:(id)arg1 relatedID:(id)arg2 ;
-(void)add;
-(void)update:(int)arg0 ;


@end


#endif