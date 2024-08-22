// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SSLOOKUPITEMARTWORK_H
#define SSLOOKUPITEMARTWORK_H

@class NSURL, NSDictionary;

#import <Foundation/Foundation.h>


@interface SSLookupItemArtwork : NSObject

@property (readonly, nonatomic) NSURL *URL;
@property (readonly, nonatomic) NSInteger height;
@property (readonly, nonatomic) NSDictionary *lookupDictionary; // ivar: _dictionary
@property (readonly, nonatomic) NSInteger width;


-(BOOL)getRed:(*CGFloat)arg0 green:(*CGFloat)arg1 blue:(*CGFloat)arg2 alpha:(*CGFloat)arg3 forColorKind:(id)arg4 ;
-(id)URLWithHeight:(NSInteger)arg0 width:(NSInteger)arg1 ;
-(id)URLWithHeight:(NSInteger)arg0 width:(NSInteger)arg1 cropStyle:(id)arg2 format:(id)arg3 ;
-(id)URLWithHeight:(NSInteger)arg0 width:(NSInteger)arg1 format:(id)arg2 ;
-(id)initWithLookupDictionary:(id)arg0 ;
-(void)dealloc;


@end


#endif