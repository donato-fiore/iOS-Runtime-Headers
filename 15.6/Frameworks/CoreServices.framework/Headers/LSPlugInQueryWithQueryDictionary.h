// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef LSPLUGINQUERYWITHQUERYDICTIONARY_H
#define LSPLUGINQUERYWITHQUERYDICTIONARY_H

@class NSDictionary, NSArray;


#import "LSPlugInQuery.h"

@interface LSPlugInQueryWithQueryDictionary : LSPlugInQuery {
    NSDictionary *_queryDict;
    NSArray *_extensionIdentifiers;
    NSArray *_extensionPointIdentifiers;
    id *_filterBlock;
}




+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)matchesPlugin:(unsigned int)arg0 pluginData:(struct LSPluginData *)arg1 withDatabase:(id)arg2 ;
-(NSUInteger)hash;
-(id)_initWithQueryDictionary:(id)arg0 applyFilter:(id)arg1 ;
-(id)_queryDictionary;
-(id)initWithCoder:(id)arg0 ;
-(void)_enumerateWithXPCConnection:(id)arg0 block:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif