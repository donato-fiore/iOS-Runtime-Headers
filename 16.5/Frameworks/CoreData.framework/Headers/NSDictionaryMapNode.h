// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NSDICTIONARYMAPNODE_H
#define NSDICTIONARYMAPNODE_H

@protocol NSCoding, NSSecureCoding;


#import "NSStoreMapNode.h"

@interface NSDictionaryMapNode : NSStoreMapNode <NSCoding, NSSecureCoding>

 {
    *id _attributes;
    id *_attributesAsEncoded;
}




+(BOOL)supportsSecureCoding;
+(void)initialize;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithValues:(*id)arg0 objectID:(id)arg1 ;
-(id)valueForKey:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif