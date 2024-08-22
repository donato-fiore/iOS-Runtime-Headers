// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLPHOTOEDITSOURCE_H
#define PLPHOTOEDITSOURCE_H



#import "PLEditSource.h"

@interface PLPhotoEditSource : PLEditSource {
    BOOL _isRAWSource;
}




-(BOOL)isRAWSource;
-(id)initWithURL:(id)arg0 type:(id)arg1 image:(id)arg2 useEmbeddedPreview:(BOOL)arg3 ;
-(id)newSourceWithURL:(id)arg0 type:(id)arg1 useEmbeddedPreview:(BOOL)arg2 ;
-(void)setURL:(id)arg0 type:(id)arg1 image:(id)arg2 useEmbeddedPreview:(BOOL)arg3 ;


@end


#endif