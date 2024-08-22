// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef KVITEM_H
#define KVITEM_H

@class NSData, NSString;
@protocol KVJSONEncodable, KVJSONDecodable;

#import <Foundation/Foundation.h>


@interface KVItem : NSObject <KVJSONEncodable, KVJSONDecodable>

 {
    *Item _item;
}


@property (readonly, nonatomic) NSData *buffer; // ivar: _buffer
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)itemFromBuffer:(id)arg0 error:(*id)arg1 ;
-(BOOL)hasFieldWithType:(NSInteger)arg0 label:(id)arg1 value:(id)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToItem:(id)arg0 ;
-(NSInteger)itemType;
-(NSUInteger)fieldCount;
-(id)JSONWithIndent:(unsigned char)arg0 ;
-(id)fieldsWithType:(NSInteger)arg0 ;
-(id)init;
-(id)initFromDictionary:(id)arg0 error:(*id)arg1 ;
-(id)initWithBuffer:(id)arg0 verify:(BOOL)arg1 copy:(BOOL)arg2 error:(*id)arg3 ;
-(id)itemId;
-(void)enumerateFieldsUsingBlock:(id)arg0 ;


@end


#endif