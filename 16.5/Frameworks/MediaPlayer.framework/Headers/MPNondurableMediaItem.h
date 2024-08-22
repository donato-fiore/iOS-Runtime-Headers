// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPNONDURABLEMEDIAITEM_H
#define MPNONDURABLEMEDIAITEM_H



#import "MPMediaItem.h"

@interface MPNondurableMediaItem : MPMediaItem {
    NSUInteger _persistentID;
}




+(BOOL)canFilterByProperty:(id)arg0 ;
+(BOOL)supportsSecureCoding;
+(id)defaultPropertyValues;
-(BOOL)existsInLibrary;
-(BOOL)isUsableAsRepresentativeItem;
-(NSUInteger)persistentID;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPersistentID:(NSUInteger)arg0 ;
-(id)mediaLibrary;
-(id)valueForProperty:(id)arg0 ;
-(id)valuesForProperties:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)enumerateValuesForProperties:(id)arg0 usingBlock:(id)arg1 ;
-(void)setValue:(id)arg0 forKey:(id)arg1 ;


@end


#endif