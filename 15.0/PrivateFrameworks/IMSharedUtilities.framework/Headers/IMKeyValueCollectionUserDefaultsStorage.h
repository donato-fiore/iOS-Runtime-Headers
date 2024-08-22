// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IMKEYVALUECOLLECTIONUSERDEFAULTSSTORAGE_H
#define IMKEYVALUECOLLECTIONUSERDEFAULTSSTORAGE_H

@class NSString;
@protocol IMKeyValueCollectionStorage;

#import <Foundation/Foundation.h>


@interface IMKeyValueCollectionUserDefaultsStorage : NSObject <IMKeyValueCollectionStorage>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *domain; // ivar: _domain
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_actuallyReadObjectForKey:(id)arg0 ;
-(id)_decodeData:(id)arg0 forKey:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithDomain:(id)arg0 ;
-(id)objectForKey:(id)arg0 ;
-(id)setWithMutableClassIfApplicableFor:(Class)arg0 ;
-(void)_actuallyWriteObject:(id)arg0 forKey:(id)arg1 ;
-(void)removeObjectForKey:(id)arg0 ;
-(void)setObject:(id)arg0 forKey:(id)arg1 ;


@end


#endif