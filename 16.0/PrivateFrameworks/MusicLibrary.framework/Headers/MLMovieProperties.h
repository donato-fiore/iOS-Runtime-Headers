// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MLMOVIEPROPERTIES_H
#define MLMOVIEPROPERTIES_H

@class NSMutableDictionary, NSArray, NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface MLMovieProperties : NSObject <NSCopying>

 {
    NSMutableDictionary *_dictionary;
}


@property (copy, nonatomic) NSArray *castMembers;
@property (copy, nonatomic) NSString *copyrightWarning;
@property (copy, nonatomic) NSArray *directors;
@property (copy, nonatomic) NSArray *producers;
@property (copy, nonatomic) NSArray *screenwriters;
@property (copy, nonatomic) NSString *studioName;


-(id)copyMoviePropertiesDictionary;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithMoviePropertiesDictionary:(id)arg0 ;
-(void)_setValue:(id)arg0 forKey:(id)arg1 ;
-(void)_setValueCopy:(id)arg0 forKey:(id)arg1 ;


@end


#endif