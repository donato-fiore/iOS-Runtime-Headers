// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NSMETADATAITEM_H
#define NSMETADATAITEM_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface NSMetadataItem : NSObject {
    id *_item;
    *void _reserved;
}


@property (readonly, copy) NSArray *attributes;


-(id)_init:(id)arg0 ;
-(id)_item;
-(id)valueForAttribute:(id)arg0 ;
-(id)valueForKey:(id)arg0 ;
-(id)valuesForAttributes:(id)arg0 ;
-(void)_setQuery:(id)arg0 ;
-(void)dealloc;


@end


#endif